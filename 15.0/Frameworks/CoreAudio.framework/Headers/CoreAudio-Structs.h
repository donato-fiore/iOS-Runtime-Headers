typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct HAL_Server_Lifetime_Events {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct weak_ptr<HAL_Server_Lifetime_Events> {
    HAL_Server_Lifetime_Events __ptr_;
    __shared_weak_count __cntrl_;
} weak_ptr<HAL_Server_Lifetime_Events>;

typedef struct shared_mutex {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::shared_mutex> {
} // Error Processing Struct Fields

typedef struct Daemon_Guts {
} // Error Processing Struct Fields

typedef struct shared_ptr<Daemon_Guts> {
} // Error Processing Struct Fields

typedef struct Server_Side_Client_IO_Host {
} // Error Processing Struct Fields

typedef struct shared_ptr<Server_Side_Client_IO_Host> {
} // Error Processing Struct Fields

typedef struct Settings_Storage {
} // Error Processing Struct Fields

typedef struct shared_ptr<AMCP::Utility::Settings_Storage> {
} // Error Processing Struct Fields

typedef struct Manager {
} // Error Processing Struct Fields

typedef struct shared_ptr<HAL::Default_Device::Manager> {
} // Error Processing Struct Fields

typedef struct shared_ptr<HAL::Aggregate::Manager> {
} // Error Processing Struct Fields

typedef struct shared_ptr<HAL::Object_State::Manager> {
} // Error Processing Struct Fields

typedef struct All_Control_Value_Observer {
} // Error Processing Struct Fields

typedef struct shared_ptr<AMCP::System::All_Control_Value_Observer> {
} // Error Processing Struct Fields

typedef struct object {
    id fObj;
} object;

typedef struct queue {
    object fObj;
} queue;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct __value_func<int ()> {
    type __buf_;
    void __f_;
} __value_func<int ()>;

typedef struct function<int ()> {
    __value_func<int ()> __f_;
} function<int ()>;

typedef struct System_Interface {
} // Error Processing Struct Fields

typedef struct shared_ptr<HALS_PowerManager::System_Interface> {
} // Error Processing Struct Fields

typedef struct __value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()> {
    type __buf_;
    void __f_;
} __value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>;

typedef struct function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()> {
    __value_func<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()> __f_;
} function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()>;

typedef struct Device_Token {
    unsigned int field0;
} Device_Token;

typedef struct AudioObjectPropertyAddress {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} AudioObjectPropertyAddress;

typedef struct Transport_Token {
    unsigned int field0;
} Transport_Token;

typedef struct XPC_Message_Payload {
    Transport_Token field0;
    Device_Token field1;
    id field2;
} XPC_Message_Payload;

typedef struct __value_func<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)> {
    type field0;
    void field1;
} __value_func<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)>;

typedef struct function<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)> {
    __value_func<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)> field0;
} function<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)>;

typedef struct Object_ID_Map {
} // Error Processing Struct Fields

typedef struct shared_ptr<HAL::Client::Object_ID_Map> {
} // Error Processing Struct Fields

typedef struct Client_Side_IO_Gateway {
} // Error Processing Struct Fields

typedef struct shared_ptr<Client_Side_IO_Gateway> {
} // Error Processing Struct Fields

typedef struct PropertyAddress {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} PropertyAddress;

typedef struct Server_Side_Client_Identity {
    int field0;
} Server_Side_Client_Identity;

typedef struct Property_Identity {
    unsigned int field0;
    PropertyAddress field1;
    Device_Token field2;
    Server_Side_Client_Identity field3;
} Property_Identity;

